/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:19 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <ITMLKit/IKJSITunesStore.h>
@class NSString, NSDictionary;


@protocol IKJSITunesStore <JSExport>
@property (nonatomic,readonly) NSString * DSID; 
@property (nonatomic,readonly) NSDictionary * accountInfo; 
@property (nonatomic,readonly) NSString * userAgent; 
@property (nonatomic,readonly) NSString * networkConnectionType; 
@property (nonatomic,retain) NSString * storefront; 
@property (nonatomic,retain) NSString * cookieURL; 
@property (nonatomic,retain) id cookie; 
@required
-(NSString *)userAgent;
-(NSDictionary *)accountInfo;
-(id)getBag;
-(void)invalidateBag;
-(id)makeStoreXMLHttpRequest;
-(void)recordEvent:(id)arg1 :(id)arg2;
-(void)flushUnreportedEvents;
-(void)clearCookies;
-(void)loadStoreContent:(id)arg1 :(id)arg2;
-(void)evaluateScripts:(id)arg1 :(id)arg2;
-(void)authenticate:(id)arg1 :(id)arg2;
-(void)signOut;
-(NSString *)DSID;
-(NSString *)networkConnectionType;
-(NSString *)cookieURL;
-(void)setCookieURL:(id)arg1;
-(NSString *)storefront;
-(void)setStorefront:(id)arg1;
-(id)cookie;
-(void)setCookie:(id)arg1;

@end


@class NSString, NSDictionary, NSNumber, SSMetricsController, ISLoadURLBagOperation;

@interface IKJSITunesStore : IKJSObject <IKJSITunesStore> {

	NSNumber* _lastAccountDSID;
	SSMetricsController* _metricsController;
	int _bagOperationLock;
	NSString* _cookieURL;
	ISLoadURLBagOperation* _pendingBagOperation;

}

@property (assign,nonatomic,__weak) ISLoadURLBagOperation * pendingBagOperation;              //@synthesize pendingBagOperation=_pendingBagOperation - In the implementation block
@property (nonatomic,readonly) NSString * DSID; 
@property (nonatomic,readonly) NSDictionary * accountInfo; 
@property (nonatomic,readonly) NSString * userAgent; 
@property (nonatomic,readonly) NSString * networkConnectionType; 
@property (nonatomic,retain) NSString * storefront; 
@property (nonatomic,retain) NSString * cookieURL;                                            //@synthesize cookieURL=_cookieURL - In the implementation block
@property (nonatomic,retain) id cookie; 
+(void)setITunesStoreHeaders:(id)arg1 ;
+(void)setHeadersForURL:(id)arg1 inRequestProperties:(id)arg2 ;
+(id)_URLBagContext;
-(NSString *)userAgent;
-(void)dealloc;
-(NSDictionary *)accountInfo;
-(void)_accountStoreChanged;
-(void)_updateWithBag:(id)arg1 ;
-(void)_updateBag:(char)arg1 ;
-(ISLoadURLBagOperation *)pendingBagOperation;
-(void)setPendingBagOperation:(ISLoadURLBagOperation *)arg1 ;
-(id)getBag;
-(void)invalidateBag;
-(id)makeStoreXMLHttpRequest;
-(void)recordEvent:(id)arg1 :(id)arg2 ;
-(void)flushUnreportedEvents;
-(void)clearCookies;
-(void)loadStoreContent:(id)arg1 :(id)arg2 ;
-(void)evaluateScripts:(id)arg1 :(id)arg2 ;
-(void)authenticate:(id)arg1 :(id)arg2 ;
-(void)signOut;
-(NSString *)DSID;
-(NSString *)networkConnectionType;
-(NSString *)cookieURL;
-(void)setCookieURL:(NSString *)arg1 ;
-(NSString *)storefront;
-(void)setStorefront:(NSString *)arg1 ;
-(id)initWithAppContext:(id)arg1 ;
-(id)cookie;
-(void)setCookie:(id)arg1 ;
-(void)_bagDidLoadNotification:(id)arg1 ;
@end
