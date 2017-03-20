/** The minplayer namespace. */
var minplayer = minplayer || {};

/**
 * Initalize the plugin.
 */
minplayer.timeline_bookmark = {
  init: function(player) {

    // Get the bookmark link.
    var bookmark_link = Drupal.settings.timeline_bookmark_link;
    if (bookmark_link) {
      player.get('timeline_indicator', function(timeline_indicator) {
        // Make some style adjustments.
        timeline_indicator.display.css({
          width: '60px',
          height: '25px',
          top: '-35px',
          left: '-38px'
        });
        timeline_indicator.elements.timeline_indicator_line.css({
          top: '41px',
          left: '38px'
        });
        timeline_indicator.elements.timeline_indicator_text.css({
          marginTop: '5px',
          textAlign: 'left'
        });

        // Create the bookmark and button.
        var timeline_bookmark = jQuery(document.createElement('div')).attr({
          'class': 'timeline-bookmark ui-state-default ui-corner-all'
        });

        var timeline_bookmark_icon = jQuery(document.createElement('span')).attr({
          'class': 'ui-icon ui-icon-tag'
        });

        var timeline_bookmark_tooltip = jQuery(document.createElement('div')).attr({
          'class': 'timeline-bookmark-tooltip'
        });

        var timeline_bookmark_text = jQuery(document.createElement('div')).attr({
          'class': 'timeline-bookmark-text'
        }).text('Bookmark this spot.');

        var timeline_bookmark_arrow = jQuery(document.createElement('div')).attr({
          'class': 'timeline-bookmark-arrow'
        }).text('&#x25BC;');

        // Add the text and the arrow to the tooltip.
        timeline_bookmark_tooltip
          .append(timeline_bookmark_text)
          .append(timeline_bookmark_arrow);

        // Hide the tooltip at first.
        timeline_bookmark_tooltip.hide();

        // Add this to the display.
        timeline_indicator.display
          .append(timeline_bookmark_tooltip)
          .append(timeline_bookmark.append(timeline_bookmark_icon));

        // Keep track of the mediatime.
        var mediatime = 0;

        // Keep track of the bookmark state.
        var bookmark_state = false;

        // Bind to the indicate event.
        timeline_indicator.bind('indicate', function(event, data) {
          mediatime = data.time;
          if (bookmark_state) {
            timeline_bookmark_text.text('Bookmark this spot.');
            bookmark_state = false;
          }
        });

        // Make sure we show the tooltip on mouseover and leave.
        timeline_bookmark.bind('mouseover', function(event) {
          timeline_bookmark_text.text('Bookmark this spot.');
          timeline_bookmark_tooltip.show('fast');
        });
        timeline_bookmark.bind('mouseleave', function(event) {
          timeline_bookmark_tooltip.hide('fast');
        });
        timeline_bookmark.click(function(event) {
          event.preventDefault();
          timeline_bookmark.addClass('timeline-bookmark-busy');
          // Send a request to bookmark.
          jQuery.ajax({
            url: bookmark_link + '/' + mediatime,
            dataType: 'json',
            success: function(data) {
              timeline_bookmark.removeClass('timeline-bookmark-busy');
              timeline_bookmark_text.text('Bookmarked!');
              setTimeout(function() {
                bookmark_state = true;
              }, 500);
            }
          });
        });
      });
    }
  }
};
