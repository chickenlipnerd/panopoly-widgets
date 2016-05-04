var creightonEduWidgets = window.creightonEduWidgets || {};
(function(cew_lib) {
    cew_lib(window.jQuery, window, document); // Some dependency injection please.
}(function ($, window, document) {
    $(function() {

        $(document).ajaxSuccess(function() {
            if (typeof fbAsyncInit !== 'undefined' && typeof FB !== 'undefined') {
                fbAsyncInit.apply();
            }

            if (typeof twttr !== 'undefined') {
                if (typeof twttr.widgets !== 'undefined') {
                    twttr.widgets.load(); // optional param is the element containing the widget.
                }
            }
        });
    });

    creightonEduWidgets = (function() {
        return {
            createFollowButton: function(twttr, t_cfg, t_container) {
                twttr.widgets.createFollowButton(
                    t_cfg['twitter-account-name'],
                    t_container,
                    {
                        size: t_cfg['twitter-opt-large-btn'],
                        showScreenName: t_cfg['twitter-show-screen-name'],
                        showCount: t_cfg['twitter-show-count']
                    }
                );
            },

            createTimeline: function(twttr, t_cfg, t_container) {
                twttr.widgets.createTimeline(
                    t_cfg['widgetId'],
                    t_container,
                    {
                        screenName: t_cfg['screenName'],
                        tweetLimit: t_cfg['tweetLmit'],
                        ariaPolite: "assertive"
                    }
                )
            }
        };
    })();
}));