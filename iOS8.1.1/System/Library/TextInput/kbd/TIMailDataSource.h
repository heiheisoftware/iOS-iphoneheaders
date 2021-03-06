/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:16 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/TextInput/kbd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <kbd/MSSearchDelegate.h>
#import <kbd/TILinguisticDataSource.h>

@class NSCondition, NSArray, MSSearch, NSString;

@interface TIMailDataSource : NSObject <MSSearchDelegate, TILinguisticDataSource> {

	BOOL _valid;
	NSCondition* _cond;
	NSArray* _outgoingMessages;
	MSSearch* _search;

}

@property (nonatomic,readonly) NSCondition * cond;                   //@synthesize cond=_cond - In the implementation block
@property (assign,getter=isValid,nonatomic) BOOL valid;              //@synthesize valid=_valid - In the implementation block
@property (nonatomic,copy) NSArray * outgoingMessages;               //@synthesize outgoingMessages=_outgoingMessages - In the implementation block
@property (nonatomic,retain) MSSearch * search;                      //@synthesize search=_search - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)searchCriterionForSenderAddresses:(id)arg1 ;
-(NSCondition *)cond;
-(void)searchAccounts:(id)arg1 ;
-(void)searchMailWithSenderAddresses:(id)arg1 ;
-(NSArray *)outgoingMessages;
-(void)setOutgoingMessages:(NSArray *)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isValid;
-(void)setValid:(BOOL)arg1 ;
-(BOOL)search:(id)arg1 didFindResults:(id)arg2 ;
-(void)search:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)setSearch:(MSSearch *)arg1 ;
-(MSSearch *)search;
-(id)nextOutgoingMessageBatch;
@end

