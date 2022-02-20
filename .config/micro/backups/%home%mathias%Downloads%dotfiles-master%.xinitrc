#!/bin/sh
#
# ~/.xinitrc
#
# Executed by startx (run your window manager from here)

if [ -d /etc/X11/xinit/xinitrc.d ]; then
  for f in /etc/X11/xinit/xinitrc.d/*; do
    [ -x "$f" ] && . "$f"
  done
  unset f
fi

## Start picom
picom -CGb &

## Polkit authentication
/usr/lib/mate-polkit/polkit-mate-authentication-agent-1 &

## Launch nitrogen before launching plank
nitrogen --restore &

## Set UK Keyboard
setxkbmap -layout be &

## Start notifications
dunst &

exec /usr/local/bin/dwm
