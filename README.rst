My personal ZMK configuration
=============================

ZMK allow you to configure the keyboard layout of your keyboard.
This is mine.

This configuration contains both the map for my `Tern BLE
<https://gitlab.com/gleb_sexy/tern-ble>`_ (a `Hummingbird style
<https://github.com/jcmkk3/awesome-hummingbirds>`_ keyboard) and `Chocofi
<https://github.com/pashutk/chocofi>`_ (a `Corn style
<https://github.com/foostan/crkbd>`_ keyboard).

The keyboard abstract the language, as I sometime need to have both
US-international and Norwegian layouts available. I utilize `Urob helpers
<https://github.com/urob/zmk-helpers>`_, and because I have two board types,
abstract over layout. Hopefully the code isn't too hard to read.
