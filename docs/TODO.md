### todo
+ .diff -file for easier application for some?
  + `diff -Naur` compared to `plan9port`-project's files.
  + modified files so far on `src/cmd/acme/`:
    + `acme.c`
    + `mkfile`
    + `config.h`
    + `text.c`
  + also featuring `src/cmd/fontsrv/x11.c`
+ fontsrv-modification? what is up with that? can i make it better
+ cursor color and shape (it defaults still to black in center even though the blocks seem to follow the text foreground color rule)
+ ctrl+shift+z = redo; delete = deletes current character see: `$PLAN9/include/keyboard.h` and `$PLAN9/src/cmd/acme/text.c`.
+ look into grabbing just the neccesary parts of acme from plan9port to create a "stand alone complex" of some sort.
+ windows-version? not really friendly to the whole compiled from the source idea, which leads me to
+ parsing colorscheme at the start of `acme2k` from a config file.  
  + `Xlib/Xresources.h` or w/e atleast looked reasonable to me
+ add more to do (contribute by adding an issue)
