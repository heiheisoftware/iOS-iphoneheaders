/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TouchRemote/TRPacketEvent.h>

@class NSData, NSString, NSDictionary;

@interface TRNowPlayingArtworkUpdatePacketEvent : TRPacketEvent {

	NSData* _artworkData;
	NSString* _artworkMIMEType;
	NSDictionary* _nowPlayingInfo;

}

@property (nonatomic,readonly) NSData * artworkData;                       //@synthesize artworkData=_artworkData - In the implementation block
@property (nonatomic,readonly) NSString * artworkMIMEType;                 //@synthesize artworkMIMEType=_artworkMIMEType - In the implementation block
@property (nonatomic,readonly) NSDictionary * nowPlayingInfo;              //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
+(unsigned)_packetEventType;
-(id)nowPlayingInfo;
-(id)description;
-(void).cxx_destruct;
-(id)artworkMIMEType;
-(id)artworkData;
-(id)_initWithVersion:(unsigned)arg1 payloadDictionary:(id)arg2 ;
-(id)initArtworkData:(id)arg1 artworkMIMEType:(id)arg2 nowPlayingInfo:(id)arg3 ;
@end

