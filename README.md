# acme2k
![logo](https://raw.githubusercontent.com/karahobny/acmecolors/master/acme2.png)
### ACME INTERNATIONAL COMPILED EDITORS

#### THEY EDIT LIKE HELL.
```
   No editor made, pretty much anywhere,

surpasses our Acme in shape, material or finish.
```
solid forged of unsigned int pieces of best wrought C, linked at the binary; tag line is made of one piece of code, compiled with -funroll-loops to the the rest of the window column and warranted with a [permissive license](https://raw.githubusercontent.com/9fans/plan9port/master/LICENSE). text window has sufficient refactoring done to insure stability and prevent SEGFAULTing; has ug, but perfectly written shell: [rc](http://doc.cat-v.org/plan_9/4th_edition/papers/rc); acme is linted and debugged by a special compiler so that there are no functions that return structures or integer and floating numbers in object code not converted to known formats and byte orders; [config.h](https://github.com/karahobny/acmecolors/blob/master/acme/config.h) should be perfectly tempered by the user or it will fuck up. mkfiles are straight and true, so you will have no trouble on account of acme returning cryptic compiler errors and not compiling.

ready thyself for thine bodieth utmost horrrifiength challengeth and read more about [acme](http://acme.cat-v.org/)

## acme2k features

+ autoindent, swapscrollbars, fonts and colors configurable from config.h.

+ arrow keys navigate through text up one letter and down one letter instead of scrolling.

+ `ctrl+c`, `ctrl+x`, `ctrl+v` for snarfing, cutting and pasting selected text; `ctrl+z` for undo and `ctrl+r` for redo.

+ `home` and `end` move the cursor to the start or to the end of the current line respectively.

+ `delete` deletes all text from the start of the line until cursor position. (a placeholder feature really)

+ the end ... ?

# brass tacks (the serious business)
## dependencies
**acme2k** depends on `plan9port` which can be found [here on github](https://github.com/9fans/plan9port) or on your local repository. i know debian has stripped plan9 userpace called `9base` but i wouldn't roll my dice with this working wth it. don't know haven't a clue, now's yer chance to feel useful and test it out.

## installation
after following the instructions in your `$PLAN9`-folder to run `./INSTALL` and `mk`'ing every goddamn plan9 userspace application there happens to be ported, you can move right on to mangle it with this godawfulness:


just copy `acme`-folder to your `$PLAN9/src/cmd` replacing the existing `acme`-folder. ie.:

```bash
      cp -r acme /usr/lib64/plan9/src/cmd/
```

you may need to build from the `INSTALL`-file located in the `$PLAN9`-root, but usually its enough to build from

```bash
      cd $PLAN9/src/cmd/acme; mk install
```

### config.h
`config.h` includes all the neccesary color and font modifications you just need to `mk install` it after every time you modify it, suckless style. 

#### fonts
`fontsrv -p .` to list all the available fonts and then use them like 
```bash
"/mnt/font/[listed font]/[font size][a(ntialias)/no a(antialias)]/font",
"/mnt/font/Monaco/9a/font",
"/mnt/font/GohuFont/9/font",
```
in this case the first option would stand for Monaco size 9 antialised, the second for GohuFont size 9 aliased, ofc.

insert two fonts into config.h. the first one is treated as a proportional width font and is used everywhere by default. the second one can be activated for a specific window by executing `Font` from its tag window.

#### colors
colors need to be in the format of `0x*rgb hex color code*FF` without the prefixed hashtag. i'd suggest just to experiment what all the #defines mean but to start you with something `c_tagbg` means tag window background color. `c_txtbg` means text window backgorund color. `...hlbg/fg` means highlighted text background and foreground color etc.

##### example looks

![configuration nro1](https://raw.githubusercontent.com/karahobny/acmecolors/master/acme1.png)

![configuration nro2](https://raw.githubusercontent.com/karahobny/acmecolors/master/acme3.png)
