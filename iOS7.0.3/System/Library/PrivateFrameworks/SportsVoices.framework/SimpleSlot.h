/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:08:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SportsVoices/Slot.h>

@class Cell;

@interface SimpleSlot : Slot {

	Cell* _cell;

}

@property (retain) Cell * cell;              //@synthesize cell=_cell - In the implementation block
+(id)instanceFromPlist:(id)arg1 ;
+(id)blank;
+(id)simpleSlotWithCell:(id)arg1 ;
+(id)empty;
-(id)initFromPlist:(id)arg1 ;
-(id)overlayedOn:(id)arg1 ;
-(BOOL)matches:(id)arg1 ;
-(id)attributeForKey:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)content;
-(id)cell;
-(void)setCell:(id)arg1 ;
-(id)initWithCell:(id)arg1 ;
-(id)reversed;
@end

