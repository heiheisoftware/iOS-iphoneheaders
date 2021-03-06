/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:51:11 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <iTunesStore/ISStoreURLOperationDelegate.h>

@class SSAuthenticationContext, NSString, ISFairPlaySAPSession, SSLookupProperties, SSLookupResponse;

@interface LookupRequestOperation : ISOperation <ISStoreURLOperationDelegate> {

	SSAuthenticationContext* _authenticationContext;
	NSString* _clientIdentifierHeader;
	ISFairPlaySAPSession* _mescalSession;
	int _personalizationStyle;
	SSLookupProperties* _properties;
	SSLookupResponse* _response;
	NSString* _userAgent;

}

@property (readonly) SSLookupProperties * lookupProperties; 
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (copy) NSString * clientIdentifierHeader; 
@property (assign) int personalizationStyle; 
@property (copy) NSString * userAgent; 
@property (readonly) SSLookupResponse * lookupResponse; 
-(id)_URLBagContext;
-(id)_authenticationContext;
-(id)initWithLookupProperties:(id)arg1 ;
-(id)lookupResponse;
-(BOOL)_performLocationLookup:(id*)arg1 ;
-(BOOL)_performJSSignLookupWithURLBag:(id)arg1 error:(id*)arg2 ;
-(BOOL)_performPlatformLookup:(id*)arg1 ;
-(void)_setLookupResponse:(id)arg1 ;
-(BOOL)_isMescalEnabledInBagContext:(id)arg1 ;
-(id)_beginMescalSession:(id*)arg1 ;
-(id)_newStoreURLOperationWithBagKey:(id)arg1 ;
-(id)_newLookupResponseWithResultsFromOperation:(id)arg1 ;
-(void)_setAccountID:(id)arg1 ;
-(id)lookupProperties;
-(void)setPersonalizationStyle:(int)arg1 ;
-(void)dealloc;
-(void)run;
-(void)setUserAgent:(id)arg1 ;
-(id)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(id)arg1 ;
-(id)authenticationContext;
-(void)setAuthenticationContext:(id)arg1 ;
-(id)userAgent;
-(void)operation:(id)arg1 willSendRequest:(id)arg2 ;
-(int)personalizationStyle;
@end

