/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class NSString, TPLCDTextViewScrollingView, UIColor, UIFont, UIFrameAnimation;

@interface TPLCDTextView : UIView {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    unsigned int _textRectIsValid : 1;
    unsigned int _centerText : 1;
    unsigned int _animates : 1;
    unsigned int _isAnimating : 1;
    unsigned int _leftTruncates : 1;
    UIFrameAnimation *_animation;
    id _delegate;
    UIFont *_font;
    float _fontSize;
    float _minFontSize;
    TPLCDTextViewScrollingView *_scrollingView;
    UIColor *_shadowColor;
    NSString *_text;
    UIColor *_textColor;
    } _textRect;
}

+ (float)defaultMinimumFontSize;

- (id)_automationID;
- (void)_drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 verticallyOffset:(BOOL)arg2;
- (void)_finishedScrolling;
- (void)_scheduleStartScrolling;
- (void)_setupForAnimationIfNecessary;
- (void)_startScrolling;
- (void)_tearDownAnimation;
- (BOOL)animates;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)resetAnimation;
- (void)setAnimatesIfTruncated:(BOOL)arg1;
- (void)setCenterText:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLCDTextFont:(id)arg1;
- (void)setLeftTruncatesText:(BOOL)arg1;
- (void)setMinimumFontSize:(float)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeToFit;
- (void)startAnimating;
- (void)stopAnimating;
- (id)text;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRect;

@end