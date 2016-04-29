/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIGestureRecognizerDelegate>, NSMutableArray, NSMutableSet, UIPhysicalButtonsEvent, UITouchesEvent, UIView;

@interface UIGestureRecognizer : NSObject {
    struct { 
        unsigned int delegateShouldBegin : 1; 
        unsigned int delegateCanPrevent : 1; 
        unsigned int delegateCanBePrevented : 1; 
        unsigned int delegateShouldRecognizeSimultaneously : 1; 
        unsigned int delegateShouldReceiveTouch : 1; 
        unsigned int delegateShouldRequireFailure : 1; 
        unsigned int delegateShouldBeRequiredToFail : 1; 
        unsigned int delegateFailed : 1; 
        unsigned int privateDelegateShouldBegin : 1; 
        unsigned int privateDelegateCanPrevent : 1; 
        unsigned int privateDelegateCanBePrevented : 1; 
        unsigned int privateDelegateShouldRecognizeSimultaneously : 1; 
        unsigned int privateDelegateShouldReceiveTouch : 1; 
        unsigned int privateDelegateShouldRequireFailure : 1; 
        unsigned int privateDelegateShouldBeRequiredToFail : 1; 
        unsigned int subclassShouldRequireFailure : 1; 
        unsigned int subclassShouldBeRequiredToFail : 1; 
        unsigned int privateSubclassShouldRequireFailure : 1; 
        unsigned int privateSubclassShouldBeRequiredToFail : 1; 
        unsigned int hasSubclassDynamicFailureRequirements : 1; 
        unsigned int hasDelegateDynamicFailureRequirements : 1; 
        unsigned int queriedFailureRequirements : 1; 
        unsigned int cancelsTouchesInView : 1; 
        unsigned int delaysTouchesBegan : 1; 
        unsigned int delaysTouchesEnded : 1; 
        unsigned int disabled : 1; 
        unsigned int dirty : 1; 
        unsigned int delivered : 1; 
        unsigned int deliveredEndedOrCancelled : 1; 
        unsigned int continuous : 1; 
        unsigned int requiresDelayedBegan : 1; 
        unsigned int willBeginAfterSatisfyingFailureRequirements : 1; 
        unsigned int requiresSystemGesturesToFail : 1; 
        unsigned int acceptsFailureRequirements : 1; 
    NSMutableArray *_delayedTouches;
    <UIGestureRecognizerDelegate> *_delegate;
    NSMutableSet *_dynamicFailureDependents;
    NSMutableSet *_dynamicFailureRequirements;
    NSMutableSet *_failureDependents;
    id _failureMap;
    NSMutableSet *_failureRequirements;
    NSMutableSet *_friends;
    } _gestureFlags;
    int _state;
    NSMutableArray *_targets;
    UIPhysicalButtonsEvent *_updateButtonEvent;
    UITouchesEvent *_updateEvent;
    UIView *_view;
}

@property BOOL cancelsTouchesInView;
@property BOOL delaysTouchesBegan;
@property BOOL delaysTouchesEnded;
@property <UIGestureRecognizerDelegate> * delegate;
@property(getter=isEnabled) BOOL enabled;
@property(readonly) int state;
@property(readonly) UIView * view;

+ (BOOL)_touchesBeganWasDelayedForTouch:(id)arg1;

- (BOOL)_acceptsFailureRequirements;
- (id)_activeTouchesForEvent:(id)arg1;
- (void)_addDynamicFailureDependent:(id)arg1;
- (void)_addDynamicFailureRequirement:(id)arg1;
- (void)_addFailureDependent:(id)arg1;
- (void)_addFriendGesture:(id)arg1;
- (BOOL)_affectedByGesture:(id)arg1;
- (void)_appendDescription:(id)arg1 forDependencies:(id)arg2 toString:(id)arg3 atLevel:(int)arg4;
- (void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2 includingDependencies:(BOOL)arg3;
- (void)_appendSubclassDescription:(id)arg1;
- (id)_briefDescription;
- (void)_cancelRecognition;
- (struct CGPoint { float x1; float x2; })_centroidOfTouches:(id)arg1 excludingEnded:(BOOL)arg2;
- (void)_clearDelayedTouches;
- (void)_clearReferencesToRelatedGesture:(id)arg1;
- (void)_clearUpdateTimer;
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;
- (void)_delayTouch:(id)arg1 forEvent:(id)arg2;
- (void)_delayTouchesForEvent:(id)arg1;
- (id)_delayedTouches;
- (void)_delayedUpdateGesture;
- (BOOL)_delegateCanPreventGestureRecognizer:(id)arg1;
- (BOOL)_delegateShouldReceiveTouch:(id)arg1;
- (int)_depthFirstViewCompare:(id)arg1;
- (void)_detach;
- (float)_distanceBetweenTouches:(id)arg1;
- (void)_enqueueDelayedTouchToSend:(id)arg1;
- (void)_enqueueDelayedTouchesToSend;
- (void)_exclude;
- (id)_failureMap;
- (void)_failureRequirementCompleted:(id)arg1 withEvent:(id)arg2;
- (BOOL)_hasTargets;
- (void)_ignorePhysicalButton:(id)arg1 forEvent:(id)arg2;
- (void)_invalidate;
- (BOOL)_isDirty;
- (BOOL)_isExcludedByGesture:(id)arg1;
- (BOOL)_isFriendWithGesture:(id)arg1;
- (BOOL)_isRecognized;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_queueForResetIfFinished;
- (void)_removeFailureDependent:(id)arg1;
- (BOOL)_requiresGestureRecognizerToFail:(id)arg1;
- (BOOL)_requiresSystemGesturesToFail;
- (void)_resetGestureRecognizer;
- (void)_resetIfFinished;
- (void)_setAcceptsFailureRequiments:(BOOL)arg1;
- (void)_setDirty;
- (void)_setFailureMap:(id)arg1;
- (void)_setRequiresSystemGesturesToFail:(BOOL)arg1;
- (BOOL)_shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (BOOL)_shouldBegin;
- (BOOL)_shouldReceiveTouch:(id)arg1;
- (BOOL)_shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (void)_touchWasCancelled:(id)arg1;
- (void)_updateGestureStateWithEvent:(id)arg1 buttonEvent:(id)arg2 afterDelay:(BOOL)arg3;
- (void)_updateGestureWithEvent:(id)arg1 buttonEvent:(id)arg2;
- (void)_willBeginAfterSatisfyingFailureRequirements;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (BOOL)cancelsTouchesInView;
- (void)dealloc;
- (BOOL)delaysTouchesBegan;
- (BOOL)delaysTouchesEnded;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)ignoreTouch:(id)arg1 forEvent:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (BOOL)isEnabled;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (struct CGPoint { float x1; float x2; })locationOfTouch:(unsigned int)arg1 inView:(id)arg2;
- (unsigned int)numberOfTouches;
- (void)pu_cancel;
- (void)removeFailureRequirement:(id)arg1;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)requireGestureRecognizerToFail:(id)arg1;
- (void)requireOtherGestureToFail:(id)arg1;
- (void)reset;
- (void)setCancelsTouchesInView:(BOOL)arg1;
- (void)setDelaysTouchesBegan:(BOOL)arg1;
- (void)setDelaysTouchesEnded:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setState:(int)arg1;
- (void)setView:(id)arg1;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (BOOL)shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (int)state;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)view;

@end