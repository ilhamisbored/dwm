# dwm 6.2
- Personal build of DWM
- Built and tested on Void Linux

# DWM Patches
- autostart
- fullgaps
- actualfullscreen
- colorbar
- barpadding
- resizecorners

# Dependencies
- conky
- pango
- pango-devel
- pkg-config
- libXft
- libXft-bgra (https://github.com/uditkarode/libxft-bgra)
- libXft-devel
- libXinerama
- libXinerama-devel
- libX11-devel
- fontconfig
- fontconfig-devel
- freetype-devel
- pamixer
- brightnessctl
- gcc
- Every other dependency that are included with the previously stated.

# Conky
Rename `conkyrc` to `.conkyrc` and place the file in your home directory.

# Note
I personally am using scrot, st, and rofi. If you wish to use something else, you can edit the config.def.h file to replace rofi with
any other run launcher, terminal, screenshot manager etc. of your choice.

# Patches
As you can see in this repo, my build of DWM has many QoL patches.

If you wish to remove a patch/add more patches, install `patch` from your distro's pkg manager.
To remove a patch:

1. `patch -R < patch-name.diff`
2.  correct any errors that may happen
3. `sudo make clean install`

To add a patch

1. `patch -Np1 < patch-name.diff`
2.  correct any errors that may happen
3. `sudo make clean install`

# Installation
`cd` into the dwm-dotfiles directory after git cloning the repository. Delete the included config.h file and run `sudo make clean install`,
under the assumption that you installed the required dependencies.

# Recompiling
Same steps as above.

# Starting it from a Display Manager (GDM, SDDM, etc;)
Create a .desktop file in /usr/share/xsessions/

[Desktop Entry]

Name=dwm

Comment=Dynamic Window Manager  

Exec=dwm

Type=Application

# Hotkeys
I'm using most of the default hotkeys, with a few changes here and there.
1. The modkey is the Super/Windows/Command key.
2. Mod + Space opens rofi
3. Mod + W closes focused application
4. Printscreen opens the snip screenshot mode for scrot
5. Mod + Printscreen takes a screenshot of the entire screen
6. Mod + Shift + Q kills the current dwm process


# Installation of dwmblocks
- Install acpi
- `cd` into the dwmblocks directory
- Run the `sudo make clean install` command.

# Installation of st
- `cd` into the st directory
- Run the `sudo make clean install` command

# Post Installation
Move all the files from the `dwm-dotfiles` directory
into the `~/.config/` directory except for `conkyrc`.
