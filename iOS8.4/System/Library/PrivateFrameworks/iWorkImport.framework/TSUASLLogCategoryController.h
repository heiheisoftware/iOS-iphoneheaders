/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface TSUASLLogCategoryController : NSObject {

	NSMutableDictionary* _dictionary;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _allCategoriesEnabledOverride;

}

@property (assign,nonatomic) BOOL allCategoriesEnabledOverride;              //@synthesize allCategoriesEnabledOverride=_allCategoriesEnabledOverride - In the implementation block
+(id)sharedController;
-(void)readFromDefaults;
-(void)setAllCategoriesEnabledOverride:(BOOL)arg1 ;
-(BOOL)allCategoriesEnabledOverride;
-(BOOL)isCategoryEnabled:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 forCategory:(id)arg2 ;
-(BOOL)isCategoryDefined:(id)arg1 ;
-(void)removeCategory:(id)arg1 ;
-(id)init;
-(id)categories;
@end
