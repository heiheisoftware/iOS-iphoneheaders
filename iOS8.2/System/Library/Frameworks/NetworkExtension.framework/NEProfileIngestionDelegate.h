/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:44 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NEProfileIngestionDelegate
@required
+(id)getServiceIDForPayload:(id)arg1;
+(void)profileMigrationComplete;
-(char)removeConfiguration:(id)arg1;
-(id)initWithNameAndType:(id)arg1 payloadType:(id)arg2;
-(id)ingestedConfiguration;
-(id)findConfigurationByConfigurationID:(id)arg1;
-(id)findConfigurationByName:(id)arg1;
-(id)findConfigurationByPayloadUUID:(id)arg1;
-(char)loadConfigurationsForceReloadFromDisk;
-(char)createConfigurationFromPayload:(id)arg1 payloadType:(id)arg2;
-(char)saveIngestedConfiguration;
-(char)removeIngestedConfiguration;
-(char)removeConfigurationWithIdentifier:(id)arg1;
-(id)setAsideConfigurationName:(id)arg1 unsetAside:(char)arg2;
-(char)isInstalled:(id)arg1;
-(char)lockConfigurations;
-(void)unlockConfigurations;
-(void)enableDefaultService;
-(char)enableAlwaysOnVpn;
-(char)updateDefaultAfterAddingConfiguration;
-(char)updateDefaultAfterDeletingConfiguration;
-(id)copyManagedConfigurationIDs;
-(char)updateAppLayerVPNMappingRules:(id)arg1;

@end

