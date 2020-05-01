(function($) {
  var plugins = {};
  Drupal.behaviors.mediafront = {
    attach: function(context) {
      // Iterate through each mediafront player settings.
      if (Drupal.settings.hasOwnProperty('mediafront')) {
        $.each(Drupal.settings.mediafront, function(id, settings) {
          $("#" + id + ":not(.mediafront-processed)").each(function() {
            if (typeof plugins[settings.preset] !== 'object') {
              plugins[settings.preset] = {};
            }
            plugins[settings.preset][settings.id] = $(this).addClass('mediafront-processed').osmplayer(settings);
          });
        });
      }

      // Now setup the mediafront connections.
      if (Drupal.settings.hasOwnProperty('mediafront_connect')) {
        $.each(Drupal.settings.mediafront_connect, function(plugin_id, settings) {
          if (!settings.connected) {
            settings.connected = true;
            minplayer.get(plugin_id, settings.type, function(plugin) {
              $.each(settings.connect, function(preset, preset) {
                if (plugins[preset]) {
                  $.each(plugins[preset], function(player_id, player) {
                    minplayer.get(player_id, "player", function(player) {
                      player.addPlugin(settings.type, plugin);
                    });
                  });
                }
              });
            });
          }
        });
      }
    }
  };
})(jQuery);