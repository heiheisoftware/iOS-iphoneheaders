/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:45 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/backupd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface MBSRestoreCompletionInfo : PBCodable {

	unsigned _errorCode;
	NSString* _errorDescription;
	SCD_Struct_MB4 _has;

}

@property (assign,nonatomic) char hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;                       //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) char hasErrorDescription; 
@property (nonatomic,retain) NSString * errorDescription;              //@synthesize errorDescription=_errorDescription - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setErrorDescription:(NSString *)arg1 ;
-(char)hasErrorDescription;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)setHasErrorCode:(char)arg1 ;
-(char)hasErrorCode;
-(NSString *)errorDescription;
-(unsigned)errorCode;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
