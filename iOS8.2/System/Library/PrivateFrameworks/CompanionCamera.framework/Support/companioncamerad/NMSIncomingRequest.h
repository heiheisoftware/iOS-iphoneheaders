/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:09 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CompanionCamera.framework/Support/companioncamerad
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <companioncamerad/NMSObfuscatableDescriptionProviding.h>

@class NMSMessageCenter, NSString, NSData, NMSOutgoingResponse;

@interface NMSIncomingRequest : NSObject <NMSObfuscatableDescriptionProviding> {

	char _expectsResponse;
	unsigned short _messageID;
	NMSMessageCenter* _messageCenter;
	NSString* _idsIdentifier;
	NSData* _data;
	unsigned _priority;
	NMSOutgoingResponse* _response;
	id _pbRequest;

}

@property (assign,nonatomic,__weak) NMSMessageCenter * messageCenter;              //@synthesize messageCenter=_messageCenter - In the implementation block
@property (assign,nonatomic) unsigned short messageID;                             //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                               //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,retain) NSData * data;                                        //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned priority;                                    //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) char expectsResponse;                                 //@synthesize expectsResponse=_expectsResponse - In the implementation block
@property (nonatomic,retain) NMSOutgoingResponse * response;                       //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) id pbRequest;                                         //@synthesize pbRequest=_pbRequest - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)allowsUnrepliedRequestsForUnitTesting;
+(void)setAllowsUnrepliedRequestsForUnitTesting:(char)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NMSOutgoingResponse *)response;
-(void)setPriority:(unsigned)arg1 ;
-(unsigned)priority;
-(void)setResponse:(NMSOutgoingResponse *)arg1 ;
-(NMSMessageCenter *)messageCenter;
-(id)pbRequest;
-(NSString *)idsIdentifier;
-(void)setExpectsResponse:(char)arg1 ;
-(id)CPObfuscatedDescriptionObject;
-(void)setPbRequest:(id)arg1 ;
-(void)setMessageCenter:(NMSMessageCenter *)arg1 ;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(char)expectsResponse;
-(void)configureResponse;
-(void)setMessageID:(unsigned short)arg1 ;
-(unsigned short)messageID;
@end

