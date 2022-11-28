#!/bin/bash

per=`cat /sys/class/power_supply/BAT0/capacity`

if [ $(upower -i `upower -e | grep BAT` | grep discharging | wc -c) -eq 0 ]
then
    echo "%{F#a6e3a1}%{F-}$per%"
else
    if [ $per -gt 90 ]
    then
        echo "%{F#a6e3a1}%{F-}$per%"
    elif [ $per -gt 75 ]
    then
        echo "%{F#a6e3a1}%{F-}$per%"
    elif [ $per -gt 50 ]
    then
        echo "%{F#a6e3a1}%{F-}$per%"
    elif [ $per -gt 30 ]
    then
        echo "%{F#f9e2af}%{F-}$per%"
    else
        echo "%{F#f38ba8}%{F-}$per%"
    fi
fi