/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/TwitterSettings.bundle/TwitterSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SLTwitterContactUpdaterDelegate;
@class ACAccount, ACAccountStore, NSMutableDictionary, NSOperationQueue, NSMutableSet;

@interface SLTwitterContactUpdater : NSObject {

	void* _addressBook;
	ACAccount* _account;
	ACAccountStore* _accountStore;
	NSMutableDictionary* _personDictionary;
	NSOperationQueue* _operationQueue;
	NSMutableSet* _updatedPeople;
	int _expectedBatchJobs;
	int _completedBatchJobs;
	float _partialBatchJobsCompleted;
	int _expectedPhotoJobs;
	int _completedPhotoJobs;
	BOOL _warnedOfFailure;
	id<SLTwitterContactUpdaterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SLTwitterContactUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)updateContacts;
-(void)updatePhotos;
-(void)batchLookupProgress:(id)arg1 ;
-(void)batchLookupFinished:(id)arg1 ;
-(void)photoLookupFinished:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)setDelegate:(id<SLTwitterContactUpdaterDelegate>)arg1 ;
-(id<SLTwitterContactUpdaterDelegate>)delegate;
-(id)initWithAccount:(id)arg1 store:(id)arg2 ;
@end

