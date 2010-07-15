/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView;

__attribute__((visibility("hidden")))
@interface UIWebDragDotView : UIView {
@private
	UIImageView* _ball;
	BOOL m_dotAtTop;
}
@property(assign, nonatomic) BOOL showsBall;
-(id)initWithFrame:(CGRect)frame withDotAtTop:(BOOL)top;
-(void)dealloc;
-(void)setFrame:(CGRect)frame;
-(void)drawRect:(CGRect)rect;
@end
