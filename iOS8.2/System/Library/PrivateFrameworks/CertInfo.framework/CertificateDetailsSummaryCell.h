/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:36 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <CertInfo/CertUIItemDetailsSummaryCell.h>

@class NSArray;

@interface CertificateDetailsSummaryCell : CertUIItemDetailsSummaryCell {

	NSArray* _details;

}

@property (nonatomic,retain) NSArray * details;              //@synthesize details=_details - In the implementation block
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)setCertificateTrust:(SecTrustRef)arg1 certificateExpiration:(id)arg2 certificateIsTrusted:(char)arg3 ;
-(void)setDetailsWithCertificateTrust:(SecTrustRef)arg1 certificateExpiration:(id)arg2 certificateIsTrusted:(char)arg3 ;
-(NSArray *)details;
-(void)setDetails:(NSArray *)arg1 ;
@end
