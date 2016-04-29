/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVController, NSDictionary, NSString;

@interface MPVideoView : UIView {
    NSDictionary *_AVURLAssetOptions;
    NSString *_moviePath;
    NSString *_movieSubtitle;
    NSString *_movieTitle;
    MPAVController *_player;
    unsigned int _scaleMode;
    double _startTime;
    double _stopTime;
    NSString *_videoID;
}

@property(retain) NSDictionary * AVURLAssetOptions;
@property(readonly) BOOL canChangeScaleMode;
@property(readonly) unsigned int effectiveScaleMode;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } movieContentFrame;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } movieFrame;
@property(retain) NSString * movieSubtitle;
@property(retain) NSString * movieTitle;
@property MPAVController * player;
@property unsigned int scaleMode;
@property double startTime;
@property double stopTime;
@property(copy) NSString * videoID;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)AVURLAssetOptions;
- (void)_bufferingStateChangedNotification:(id)arg1;
- (void)_playbackStateChangedNotification:(id)arg1;
- (BOOL)canChangeScaleMode;
- (void)dealloc;
- (void)didMoveToWindow;
- (unsigned int)effectiveScaleMode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })movieContentFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })movieFrame;
- (id)moviePath;
- (id)movieSubtitle;
- (id)movieTitle;
- (void)play;
- (void)playFromBeginning;
- (void)playWhenLikelyToKeepUp;
- (id)player;
- (void)prepareAVControllerQueue;
- (unsigned int)scaleMode;
- (void)setAVURLAssetOptions:(id)arg1;
- (void)setMovieSubtitle:(id)arg1;
- (void)setMovieTitle:(id)arg1;
- (void)setMovieWithPath:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setScaleMode:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setScaleMode:(unsigned int)arg1 duration:(float)arg2;
- (void)setScaleMode:(unsigned int)arg1;
- (void)setStartTime:(double)arg1;
- (void)setStopTime:(double)arg1;
- (void)setVideoID:(id)arg1;
- (double)startTime;
- (double)stopTime;
- (void)toggleScaleMode:(BOOL)arg1;
- (id)videoID;

@end