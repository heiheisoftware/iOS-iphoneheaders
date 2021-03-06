/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:17 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMMessageChatItem.h>

@class NSAttributedString;

@interface IMMessagePartChatItem : IMMessageChatItem {

	NSAttributedString* _text;
	int _index;

}

@property (nonatomic,copy,readonly) NSAttributedString * text;              //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) int index;                                     //@synthesize index=_index - In the implementation block
+(id)_newMessagePartsForMessageItem:(id)arg1 ;
+(id)_messageItemWithPartsDeleted:(id)arg1 fromMessageItem:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSAttributedString *)text;
-(int)index;
-(void)setIndex:(int)arg1 ;
-(char)canDelete;
-(id)_initWithItem:(id)arg1 text:(id)arg2 index:(int)arg3 ;
@end

