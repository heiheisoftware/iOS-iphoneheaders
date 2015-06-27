/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:02 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTActionableTemplateItem.h>

@class SAUIDecoratedText, SAUILocalImageResource, NSString;

@interface SASTButtonItem : AceObject <SASTActionableTemplateItem>

@property (nonatomic,retain) id<SASTTemplateAction> action; 
@property (assign,nonatomic) char centered; 
@property (nonatomic,retain) SAUIDecoratedText * decoratedLabel; 
@property (nonatomic,retain) SAUILocalImageResource * localImageResource; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buttonItemWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)buttonItem;
-(id)groupIdentifier;
-(id<SASTTemplateAction>)action;
-(void)setAction:(id<SASTTemplateAction>)arg1 ;
-(char)centered;
-(id)encodedClassName;
-(SAUILocalImageResource *)localImageResource;
-(void)setLocalImageResource:(SAUILocalImageResource *)arg1 ;
-(void)setCentered:(char)arg1 ;
-(SAUIDecoratedText *)decoratedLabel;
-(void)setDecoratedLabel:(SAUIDecoratedText *)arg1 ;
@end
