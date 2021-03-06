/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:38 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SASyncAnchor : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long count; 
@property (nonatomic,copy) NSString * generation; 
@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * validity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)anchor;
+(id)anchorWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setGeneration:(NSString *)arg1 ;
-(void)setValidity:(NSString *)arg1 ;
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)generation;
-(id)encodedClassName;
-(NSString *)validity;
@end

