## The market litmus drupal distribution.

### Build

Copy the `simple_distro.make` file to your system and run with `drush make`

    $ curl -O https://github.com/iaminawe/marketlitmus/raw/master/marketlitmus_distro.make
    $ drush make --working-copy marketlitmus_distro.make marketlitmus

### Notes

This project contains a distro features module, `simple_config`.

At this time, Simple does not attempt to maintain backwards compatability
between updates.

### Thanks

Built on top of [Build Kit](http://drupal.org/project/buildkit)

