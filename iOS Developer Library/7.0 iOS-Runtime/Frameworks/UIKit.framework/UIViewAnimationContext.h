/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UITableViewCell;

@interface UIViewAnimationContext : NSObject {
    int _animationCount;
    id _completionHandler;
    UITableViewCell *_swipeToDeleteCell;
    NSArray *_viewAnimations;
}

@property int animationCount;
@property(readonly) id completionHandler;
@property(retain) UITableViewCell * swipeToDeleteCell;
@property(retain) NSArray * viewAnimations;

- (int)animationCount;
- (id)completionHandler;
- (void)dealloc;
- (id)initWithCompletionHandler:(id)arg1;
- (void)setAnimationCount:(int)arg1;
- (void)setSwipeToDeleteCell:(id)arg1;
- (void)setViewAnimations:(id)arg1;
- (id)swipeToDeleteCell;
- (id)viewAnimations;

@end