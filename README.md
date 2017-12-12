# acme
just copy `acme`-folder to your `$PLAN9/src/cmd` replacing the existing `acme`-folder. ie.:
   `cp acme /usr/lib64/plan9/src/cmd/ -R`
you may need to build from the `INSTALL`-file located in the `$PLAN9`-root, but usually its enough to build from
    `cd $PLAN9/src/cmd/acme; mk install`

## config.h
`config.h` includes all the neccesary color and font modifications you just need to `mk install` it after every time you modify it, suckless style. `fontsrv -p .` to list all the available fonts and then use them like `"/mnt/font/*listed font*/*font size**a or no a depending if you want antialiasing or not*/font"` ie.
    `"/mnt/font/Monaco/9a/font"`
would stand for Monaco size 9 antialised.

## colors
colors need to be in the format of `0x*rgb hex color code*FF` without the prefixed hashtag. i'd suggest just to experiment what all the #defines mean but to start you with something `c_tagbg` means tag window background color. `c_txtbg` means text window backgorund color. `...hlbg/fg` means highlighted text background and foreground color etc.

## example looks
![configuration nro1](https://raw.githubusercontent.com/karahobny/acmecolors/master/acme1.png)
![configuration nro2](https://raw.githubusercontent.com/karahobny/acmecolors/master/acme2.png)
