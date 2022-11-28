#!/bin/bash

if [ $(iwgetid -r | wc -c) -eq 0 ];
then
    echo "%{F#585b70}%{F-}"
else
    echo "%{F#a6e3a1}%{F-}"
fi