/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, BKCollection;

@interface BKCollectionMember : NSManagedObject

@property (nonatomic,retain) NSString * databaseKey; 
@property (nonatomic,retain) NSNumber * sortKey; 
@property (nonatomic,retain) BKCollection * collection; 
+(id)collectionMemberDictionariesWithDatabaseKeys:(id)arg1 ;
+(id)summariesForBackup:(id)arg1 ;
+(id)collectionMemberDictionaryWithBook:(id)arg1 ;
+(unsigned long long)highestSafeSortKey;
@end
