#!/bin/sh

feh --bg-scale ~/Images/wp/wp4.jpg
setxkbmap us,ru -option 'grp:alt_shift_toggle'

bash ~/dwm/statusbar/statusbar &

while true; do
	# Log stderror to a file
	dwm 2>~/.dwm.log
	# No error logging
	#dwm >/dev/null 2>&1
done
