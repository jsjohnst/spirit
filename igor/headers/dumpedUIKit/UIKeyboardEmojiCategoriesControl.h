/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class UIImage, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCategoriesControl : UIControl {
@private
	int _selected;
	int _total;
	NSArray* _selectedImages;
	NSArray* _unselectedImages;
	UIImage* _darkDivider;
	UIImage* _plainDivider;
	UIImage* _selectedDivider;
	NSMutableArray* _segmentViews;
	NSMutableArray* _dividerViews;
}
@property(assign) int selectedIndex;
-(id)initWithFrame:(CGRect)frame;
-(void)updateSegmentImages;
-(void)setFrame:(CGRect)frame;
-(void)layoutSubviews;
-(void)releaseImagesAndViews;
-(void)dealloc;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)updateSegmentAndDividers:(int)dividers;
@end

