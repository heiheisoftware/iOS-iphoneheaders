/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libAWDProtobufFacetimeiMessage.dylib
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDProtobufFacetimeiMessage.dylib/libAWDProtobufFacetimeiMessage.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface AWDIMessageAttachmentUpload : PBCodable {

	unsigned long long _timestamp;
	unsigned _attachmentSize;
	unsigned _connectionType;
	int _fzError;
	int _genericError;
	NSString* _guid;
	int _linkQuality;
	unsigned _messageError;
	unsigned _tokenError;
	unsigned _uploadDuration;
	SCD_Struct_AW6 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasFzError; 
@property (assign,nonatomic) int fzError;                               //@synthesize fzError=_fzError - In the implementation block
@property (assign,nonatomic) BOOL hasMessageError; 
@property (assign,nonatomic) unsigned messageError;                     //@synthesize messageError=_messageError - In the implementation block
@property (assign,nonatomic) BOOL hasTokenError; 
@property (assign,nonatomic) unsigned tokenError;                       //@synthesize tokenError=_tokenError - In the implementation block
@property (assign,nonatomic) BOOL hasGenericError; 
@property (assign,nonatomic) int genericError;                          //@synthesize genericError=_genericError - In the implementation block
@property (assign,nonatomic) BOOL hasUploadDuration; 
@property (assign,nonatomic) unsigned uploadDuration;                   //@synthesize uploadDuration=_uploadDuration - In the implementation block
@property (assign,nonatomic) BOOL hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                           //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                   //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasAttachmentSize; 
@property (assign,nonatomic) unsigned attachmentSize;                   //@synthesize attachmentSize=_attachmentSize - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)connectionType;
-(void)setConnectionType:(unsigned)arg1 ;
-(id)guid;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setGuid:(id)arg1 ;
-(BOOL)hasGuid;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasConnectionType;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasGenericError;
-(int)genericError;
-(void)setGenericError:(int)arg1 ;
-(BOOL)hasLinkQuality;
-(int)linkQuality;
-(void)setLinkQuality:(int)arg1 ;
-(void)setHasGenericError:(BOOL)arg1 ;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(BOOL)hasFzError;
-(int)fzError;
-(void)setFzError:(int)arg1 ;
-(BOOL)hasMessageError;
-(unsigned)messageError;
-(void)setMessageError:(unsigned)arg1 ;
-(BOOL)hasTokenError;
-(unsigned)tokenError;
-(void)setTokenError:(unsigned)arg1 ;
-(BOOL)hasAttachmentSize;
-(unsigned)attachmentSize;
-(void)setAttachmentSize:(unsigned)arg1 ;
-(void)setHasFzError:(BOOL)arg1 ;
-(void)setHasMessageError:(BOOL)arg1 ;
-(void)setHasTokenError:(BOOL)arg1 ;
-(void)setHasAttachmentSize:(BOOL)arg1 ;
-(BOOL)hasUploadDuration;
-(unsigned)uploadDuration;
-(void)setUploadDuration:(unsigned)arg1 ;
-(void)setHasUploadDuration:(BOOL)arg1 ;
@end

