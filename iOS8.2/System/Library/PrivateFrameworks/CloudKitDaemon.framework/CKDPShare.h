/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:44 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSData, NSString, NSMutableArray, CKDPShareIdentifier;

@interface CKDPShare : PBCodable <NSCopying> {

	NSData* _keyData;
	NSString* _keyVersion;
	NSMutableArray* _participants;
	NSData* _resource;
	NSString* _resourceProvider;
	int _resourceState;
	CKDPShareIdentifier* _shareId;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) char hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;              //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,retain) NSMutableArray * participants;              //@synthesize participants=_participants - In the implementation block
@property (nonatomic,readonly) char hasResourceProvider; 
@property (nonatomic,retain) NSString * resourceProvider;                //@synthesize resourceProvider=_resourceProvider - In the implementation block
@property (nonatomic,readonly) char hasResource; 
@property (nonatomic,retain) NSData * resource;                          //@synthesize resource=_resource - In the implementation block
@property (assign,nonatomic) char hasResourceState; 
@property (assign,nonatomic) int resourceState;                          //@synthesize resourceState=_resourceState - In the implementation block
@property (nonatomic,readonly) char hasKeyVersion; 
@property (nonatomic,retain) NSString * keyVersion;                      //@synthesize keyVersion=_keyVersion - In the implementation block
@property (nonatomic,readonly) char hasKeyData; 
@property (nonatomic,retain) NSData * keyData;                           //@synthesize keyData=_keyData - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)addParticipant:(id)arg1 ;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(unsigned)participantsCount;
-(void)clearParticipants;
-(id)participantAtIndex:(unsigned)arg1 ;
-(char)hasShareId;
-(CKDPShareIdentifier *)shareId;
-(NSMutableArray *)participants;
-(void)setParticipants:(NSMutableArray *)arg1 ;
-(void)setKeyData:(NSData *)arg1 ;
-(char)hasKeyData;
-(NSData *)keyData;
-(void)setResourceProvider:(NSString *)arg1 ;
-(void)setKeyVersion:(NSString *)arg1 ;
-(char)hasResourceProvider;
-(char)hasResource;
-(void)setResourceState:(int)arg1 ;
-(void)setHasResourceState:(char)arg1 ;
-(char)hasResourceState;
-(char)hasKeyVersion;
-(NSString *)resourceProvider;
-(int)resourceState;
-(NSString *)keyVersion;
-(NSData *)resource;
-(void)setResource:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
