/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol NSFetchedResultsSectionInfo
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * indexTitle; 
@property (nonatomic,readonly) unsigned long long numberOfObjects; 
@property (nonatomic,readonly) NSArray * objects; 
@required
-(NSString *)indexTitle;
-(unsigned long long)numberOfObjects;
-(NSArray *)objects;
-(NSString *)name;

@end

