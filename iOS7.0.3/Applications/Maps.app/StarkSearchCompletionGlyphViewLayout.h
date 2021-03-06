/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/SearchCompletionGlyphViewLayout.h>

@class UIView;

@interface StarkSearchCompletionGlyphViewLayout : SearchCompletionGlyphViewLayout {

	UIView* _separator;
	BOOL _separatorHidden;
	BOOL _collapsesLeftMarginWithoutGlyph;
	float _leftInsetWithoutGlyph;
	float _availableLabelWidth;
	int _labelPositions;

}

@property (assign,nonatomic) BOOL collapsesLeftMarginWithoutGlyph;              //@synthesize collapsesLeftMarginWithoutGlyph=_collapsesLeftMarginWithoutGlyph - In the implementation block
@property (assign,nonatomic) float leftInsetWithoutGlyph;                       //@synthesize leftInsetWithoutGlyph=_leftInsetWithoutGlyph - In the implementation block
@property (assign,nonatomic) int labelPositions;                                //@synthesize labelPositions=_labelPositions - In the implementation block
@property (assign,nonatomic) BOOL separatorHidden;                              //@synthesize separatorHidden=_separatorHidden - In the implementation block
@property (nonatomic,readonly) float availableLabelWidth;                       //@synthesize availableLabelWidth=_availableLabelWidth - In the implementation block
-(id)titleLabelTextAttributes;
-(float)availableLabelWidth;
-(id)subtitleLabelTextAttributes;
-(void)setLabelPositions:(int)arg1 ;
-(float)leftInsetWithoutGlyph;
-(BOOL)collapsesLeftMarginWithoutGlyph;
-(int)labelPositions;
-(id)boldTitleLabelTextAttributes;
-(id)boldSubtitleLabelTextAttributes;
-(void)setCollapsesLeftMarginWithoutGlyph:(BOOL)arg1 ;
-(void)setLeftInsetWithoutGlyph:(float)arg1 ;
-(BOOL)separatorHidden;
-(void)dealloc;
-(id)init;
-(void)layout;
-(void)setSeparatorHidden:(BOOL)arg1 ;
@end

