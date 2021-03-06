/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSSet, BKPortDeathWatcher;

@interface BKEventFocusClient : NSObject {

	unsigned _port;
	id _delegate;
	NSString* _clientID;
	NSSet* _deferrals;
	BKPortDeathWatcher* _portDeathWatcher;

}

@property (assign,nonatomic) unsigned port;                                      //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) id delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * clientID;                                  //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,retain) NSSet * deferrals;                                  //@synthesize deferrals=_deferrals - In the implementation block
@property (nonatomic,retain) BKPortDeathWatcher * portDeathWatcher;              //@synthesize portDeathWatcher=_portDeathWatcher - In the implementation block
-(id)deferrals;
-(id)initWithID:(id)arg1 port:(unsigned)arg2 delegate:(id)arg3 ;
-(void)setDeferrals:(id)arg1 ;
-(id)portDeathWatcher;
-(void)setPortDeathWatcher:(id)arg1 ;
-(void)setPort:(unsigned)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)delegate;
-(BOOL)isValid;
-(id)deferredPropertiesForProperties:(id)arg1 ;
-(void)setClientID:(id)arg1 ;
-(id)clientID;
-(unsigned)port;
@end

