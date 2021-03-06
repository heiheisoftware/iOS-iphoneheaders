/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:56 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDate;

@interface WBSRecentWebSearchEntry : NSObject {

	NSString* _searchString;
	NSDate* _date;

}

@property (readonly) NSString * searchString;              //@synthesize searchString=_searchString - In the implementation block
@property (readonly) NSDate * date;                        //@synthesize date=_date - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDate *)date;
-(NSString *)searchString;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithSearchString:(id)arg1 date:(id)arg2 ;
-(id)initWithSearchString:(id)arg1 ;
@end

