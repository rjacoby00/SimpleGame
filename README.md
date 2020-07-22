# SimpleGame
### Ryan Jacoby

SimpleGame is a light wieght game engine for making text based, top down dungeon crawlers.

## Future features
- Read map+basic config from `main.sg`
  - Read multiple config files from `Custom\custom.sg` included from `main.sg`
- Doors + locked doors
- Add support for multi-page maps
- Add inventory gui
- Add custom item support(can be on ground, or start in player inventory)
  - Item types:
    - Health(+ or -)
    - Collectable(does nothing)
    - Key(open chest, door, or other window)
- Add chests(random or predefined contents)
- Add health and things to do damage(spikes, etc..)
- Add custom enemy support (will they have AI?)
- Possible Vulkan GUI port with simple pixelart graphics

## Config documentation
### Folder structure
```
|--Custom
|  |--custom.sg
|
|--main.sg
|--simplegame
```
### main.sg
Needed Arguments:
- First line: `game_main`
- End: MAP
> Map ascii art follows this argument.

Optional Arguments: 
- Title
> Will not display if not provided

- Creator
> Will not display if not provided 

- Player Positon
> Will default to (1, 1) if not provided.  Upper left corner is (0, 0), down +y and right +x.

- Include
> You can include as many of these as you want.  Will include files from `Custom` directory to add customization to future features such as more maps for multiple pages, map links, item defintions, chest contents/loot tables, custom enemy definitions, and maybe paths to art if the game is ported to Vulkan.
```sg
game_main
title:Test Title
creator:Ryan
player@1,1
include:custom.sg

MAP
##########
# # #    #
# # ## # #
# #  # # #
#      # #
# ### ## #
# # # #F #
# # # ####
#   #    #
##########
```
