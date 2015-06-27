/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:16:41 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/suggestd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <suggestd/SGDSuggestManagerProtocol.h>

@protocol SGMailClient;
@class NSObject, NSXPCConnection, SGSuggestHistory, NSString;

@interface SGDSuggestManager : NSObject <SGDSuggestManagerProtocol> {

	NSObject*<SGMailClient> _mailClient;
	NSXPCConnection* _connection;
	SGSuggestHistory* _history;
	/*^block*/id _ekStoreFactory;
	double _warmTime;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)setupManagerWithMailClient:(id)arg1 connection:(id)arg2 ;
-(id)shortNamesAndRealtimeEventsFromDissectedEntity:(id)arg1 withStore:(id)arg2 ;
-(id)realtimeContactsFromDissectedEntity:(id)arg1 withStore:(id)arg2 ;
-(id)curatedEventsWithSameOpaqueKeyAsPseudoEvent:(id)arg1 ;
-(id)curatedEventKeyForExactMatchOfPseudoEvent:(id)arg1 candidates:(id)arg2 ;
-(id)createEKStore;
-(void)setEKStoreFactoryForTesting:(/*^block*/id)arg1 ;
-(id)initWithMailClient:(id)arg1 ;
-(void)messagesToRefreshWithCompletion:(/*^block*/id)arg1 ;
-(char)canSeeCalendar;
-(void)dealloc;
-(void)relevantABRecordIDsWithLimit:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)isEnabledWithCompletion:(/*^block*/id)arg1 ;
-(void)prepareForRealtimeExtraction:(/*^block*/id)arg1 ;
-(void)resetConfirmationAndRejectionHistory:(/*^block*/id)arg1 ;
-(void)clearCachesFully:(char)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)contactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)contactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)eventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned)arg3 options:(unsigned)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)eventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned)arg4 options:(unsigned)arg5 withCompletion:(/*^block*/id)arg6 ;
-(void)eventsInFutureLimitTo:(unsigned)arg1 options:(unsigned)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(unsigned)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)contactMatchesByPhoneNumber:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)contactMatchesByEmailAddress:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)contactFromABRecordID:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)confirmEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)rejectEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)confirmContact:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)rejectContact:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)sendRTCLogsWithCompletion:(/*^block*/id)arg1 ;
-(void)eventsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)contactsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)contactsWithPrefix:(id)arg1 limitTo:(unsigned)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)initWithConnection:(id)arg1 ;
@end
