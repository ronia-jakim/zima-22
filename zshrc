PROMPT="%F{red}ฅ^•ﻌ•^ฅ%f %F{yellow}%n%f:%F{green}%~/ %f%F{red}ᓚᘏᗢ%f "

alias powersaver="powertop -c"

alias screens="brightnessctl -l"

bindkey "^[[1;5D" backward-word
bindkey "^[[1;5C" forward-word
bindkey "^H" backward-kill-word

alias keycodes="xev | awk -F'[ )]+' '/^KeyPress/ { a[NR+2] } NR in a { printf "%-3s %s\n", $5, $8 }'"

# ~/tasks.sh
export PATH=$PATH:/home/maruda/.spicetify
alias ls='ls --color=auto -1'

alias zabijcie='cd ~/uni-stuff/zima-22 && code .'

function gituje {
	git add -A && git commit -m $1 && git push
}

alias palce='libinput-gestures-setup autostart star'

print -P "%F{red} %f%F{magenta} %f%F{yellow} %f%F{green} %f%F{cyan} %f%F{blue} %f"
