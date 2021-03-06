/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UIView, NSLayoutConstraint;

@interface GKSectionSeparatorView : UICollectionReusableView {

	float _separatorOffset;
	UIView* _underlineView;
	NSLayoutConstraint* _underlineYConstraint;

}

@property (assign,nonatomic) float separatorOffset;                                  //@synthesize separatorOffset=_separatorOffset - In the implementation block
@property (nonatomic,retain) UIView * underlineView;                                 //@synthesize underlineView=_underlineView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * underlineYConstraint;              //@synthesize underlineYConstraint=_underlineYConstraint - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id)underlineView;
-(void)setUnderlineView:(id)arg1 ;
-(void)setSeparatorOffset:(float)arg1 ;
-(float)separatorOffset;
-(id)underlineYConstraint;
-(void)setUnderlineYConstraint:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
@end

