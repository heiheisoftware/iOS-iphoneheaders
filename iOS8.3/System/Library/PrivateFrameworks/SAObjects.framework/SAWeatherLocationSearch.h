/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:30 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSURL, NSString;

@interface SAWeatherLocationSearch : SADomainCommand

@property (nonatomic,copy) NSURL * identifier; 
@property (nonatomic,copy) NSString * locationId; 
+(id)locationSearch;
+(id)locationSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSURL *)identifier;
-(void)setIdentifier:(NSURL *)arg1 ;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSString *)locationId;
-(void)setLocationId:(NSString *)arg1 ;
@end
