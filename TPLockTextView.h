/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIKit/UIView.h>

@class NSString, NSTimer, UIFont;

@interface TPLockTextView : UIView {
	NSString* _label;
	CGImageRef _textCache;
	char* _textData;
	NSTimer* _maskTimer;
	double _maskStartTime;
	UIFont* _labelFont;
	float _fps;
}
-(void)dealloc;
-(void)_cacheLabel:(id)label size:(CGSize)size;
-(id)initWithLabel:(id)label fontSize:(float)size;
-(id)label;
-(void)startAnimation;
-(void)stopAnimation;
-(void)setFPS:(float)fps;
-(BOOL)isAnimating;
-(void)drawRect:(CGRect)rect;
-(void)movedFromWindow:(id)window;
@end
