/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <Preferences/PSListController.h>

@class NSArray;

@interface MCCertificateDetailsController : PSListController {

	NSArray* _properties;

}
+(id)_dateFormatter;
-(id)specifiersFromCertificateProperties:(id)arg1 ;
-(id)valueForSpecifier:(id)arg1 ;
-(id)_propertiesFromTrust:(SecTrustRef)arg1 ;
-(id)specifiersFromTrust:(SecTrustRef)arg1 ;
-(id)specifiers;
-(void).cxx_destruct;
@end
