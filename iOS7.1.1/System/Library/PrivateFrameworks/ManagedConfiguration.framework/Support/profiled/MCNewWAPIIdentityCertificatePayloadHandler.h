/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:14:53 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <profiled/MCNewCertificatePayloadHandler.h>

@interface MCNewWAPIIdentityCertificatePayloadHandler : MCNewCertificatePayloadHandler
-(BOOL)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)unsetAside;
-(void)setAside;
-(id)_cannotStoreCertificateError;
-(id)_malformedCertificateError;
-(id)_cannotStorePEMDataError;
-(BOOL)_storePEMDataInKeychain:(id)arg1 UUID:(id)arg2 outError:(id*)arg3 ;
-(void)remove;
@end

