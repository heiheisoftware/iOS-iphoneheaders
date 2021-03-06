/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCore/IMService.h>

@class NSString, NSMutableDictionary, NSDictionary, IMAccount, NSData, NSArray, IDSService;

@interface IMServiceImpl : IMService {

	NSString* _name;
	NSString* _localizedName;
	NSString* _localizedShortName;
	NSMutableDictionary* _cardMap;
	NSDictionary* _personToIDMap;
	IMAccount* _bestAccount;
	NSDictionary* _serviceDefaults;
	NSDictionary* _serviceProps;
	NSDictionary* _defaultSettings;
	NSData* _imageData;
	NSArray* _abProperties;
	NSArray* _emailDomains;
	IDSService* _idsService;
	unsigned _screenNameSensitivity;
	bool _hasLoadedServiceProperties;
	bool _handlesChatInvites;
	bool _supportsSMS;
	bool _supportsPhoneNumberMapping;
	bool _supportsGroupAttachments;
	bool _supportsMutatingGroupMembers;
	bool _supportsAuthorization;
	bool _supportsRegistration;
	bool _supportsAdding;
	bool _supportsPresence;
	bool _supportsIDStatusLookup;
	bool _supportsDatabaseStorage;
	bool _shouldInternationalizeNumbers;
	bool _supportsOfflineTransfers;
	bool _shouldDisableDeactivation;
	bool _ignoresNetworkConnectivity;
	bool _isPersistent;
	bool _isPlugInService;
	bool _allowsMultipleConnections;

}

@property (nonatomic,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * shortName;                             //@synthesize localizedShortName=_localizedShortName - In the implementation block
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,retain) NSDictionary * serviceProperties; 
@property (nonatomic,retain) NSDictionary * defaultAccountSettings;              //@synthesize defaultSettings=_defaultSettings - In the implementation block
@property (nonatomic,readonly) bool supportsAdding;                              //@synthesize supportsAdding=_supportsAdding - In the implementation block
@property (nonatomic,readonly) bool supportsPresence;                            //@synthesize supportsPresence=_supportsPresence - In the implementation block
@property (nonatomic,readonly) bool supportsGroupAttachments;                    //@synthesize supportsGroupAttachments=_supportsGroupAttachments - In the implementation block
@property (nonatomic,readonly) bool supportsMutatingGroupMembers;                //@synthesize supportsMutatingGroupMembers=_supportsMutatingGroupMembers - In the implementation block
@property (nonatomic,readonly) bool supportsRegistration;                        //@synthesize supportsRegistration=_supportsRegistration - In the implementation block
@property (nonatomic,readonly) bool supportsAuthorization;                       //@synthesize supportsAuthorization=_supportsAuthorization - In the implementation block
@property (nonatomic,readonly) bool supportsPhoneNumberMapping;                  //@synthesize supportsPhoneNumberMapping=_supportsPhoneNumberMapping - In the implementation block
@property (nonatomic,readonly) bool supportsIDStatusLookup;                      //@synthesize supportsIDStatusLookup=_supportsIDStatusLookup - In the implementation block
@property (nonatomic,readonly) bool supportsOfflineTransfers;                    //@synthesize supportsOfflineTransfers=_supportsOfflineTransfers - In the implementation block
@property (nonatomic,readonly) bool isPersistent;                                //@synthesize isPersistent=_isPersistent - In the implementation block
@property (nonatomic,readonly) bool ignoresNetworkConnectivity;                  //@synthesize ignoresNetworkConnectivity=_ignoresNetworkConnectivity - In the implementation block
@property (nonatomic,readonly) long long maxAttachmentSize; 
@property (nonatomic,readonly) long long maxChatParticipants; 
@property (nonatomic,readonly) unsigned IDSensitivity;                           //@synthesize screenNameSensitivity=_screenNameSensitivity - In the implementation block
@property (nonatomic,readonly) bool shouldDisableDeactivation;                   //@synthesize shouldDisableDeactivation=_shouldDisableDeactivation - In the implementation block
@property (nonatomic,readonly) bool isPlugInService;                             //@synthesize isPlugInService=_isPlugInService - In the implementation block
@property (nonatomic,readonly) NSArray * addressBookProperties;                  //@synthesize abProperties=_abProperties - In the implementation block
@property (nonatomic,readonly) NSString * addressBookProperty; 
@property (nonatomic,readonly) NSArray * emailDomains;                           //@synthesize emailDomains=_emailDomains - In the implementation block
@property (nonatomic,readonly) bool allowsMultipleConnections;                   //@synthesize allowsMultipleConnections=_allowsMultipleConnections - In the implementation block
@property (nonatomic,readonly) long long buddyNotesMaxByteLength; 
@property (nonatomic,readonly) NSData * serviceImageData; 
@property (nonatomic,readonly) Class accountClass; 
@property (nonatomic,readonly) bool _wantsInternationizedNumbers; 
@property (nonatomic,readonly) bool _supportsDatabaseStorage; 
@property (nonatomic,retain) NSDictionary * serviceDefaults;                     //@synthesize serviceDefaults=_serviceDefaults - In the implementation block
@property (nonatomic,readonly) NSArray * accountIDs; 
@property (nonatomic,readonly) NSDictionary * cardMap; 
@property (nonatomic,readonly) bool handlesChatInvites;                          //@synthesize handlesChatInvites=_handlesChatInvites - In the implementation block
+(id)operationalServicesWithCapability:(unsigned long long)arg1 ;
+(id)allServices;
+(id)allServicesNonBlocking;
+(id)serviceWithName:(id)arg1 ;
+(Class)serviceClass;
+(void)setServiceClass:(Class)arg1 ;
+(id)serviceWithInternalName:(id)arg1 ;
+(id)activeServices;
+(id)connectedServices;
+(id)servicesWithCapability:(unsigned long long)arg1 ;
+(id)connectedServicesWithCapability:(unsigned long long)arg1 ;
+(id)supportedCountryCodes;
+(bool)systemSupportsSMSSending;
-(void)dealloc;
-(id)description;
-(bool)isEnabled;
-(id)name;
-(id)localizedName;
-(bool)isPersistent;
-(id)initWithName:(id)arg1 ;
-(void)disconnect;
-(unsigned long long)status;
-(bool)supportsIDStatusLookup;
-(long long)maxChatParticipants;
-(bool)initialSyncPerformed;
-(id)localizedShortName;
-(id)infoForScreenName:(id)arg1 ;
-(id)infoForAllScreenNames;
-(id)infoForPreferredScreenNames;
-(id)canonicalFormOfID:(id)arg1 ;
-(id)peopleWithScreenName:(id)arg1 ;
-(id)screenNamesForPerson:(id)arg1 ;
-(id)myScreenNames;
-(void)activeAccountsChanged:(id)arg1 ;
-(void)_syncWithRemoteBuddies;
-(id)internalName;
-(void)statusChangedForAccount:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3 ;
-(void)clearIDToCardMap;
-(void)_calculateBestAccount;
-(void)_blockUntilInitialSyncPerformed;
-(id)_abPropertiesBySanitizingABProperties:(id)arg1 ;
-(void)_loadPropertiesIfNeeded;
-(bool)supportsPhoneNumberMapping;
-(id)_IDsToMapForIMPerson:(id)arg1 ;
-(id)imABPeopleWithScreenName:(id)arg1 countryCode:(id)arg2 identifier:(int*)arg3 ;
-(id)imABPeopleWithScreenName:(id)arg1 identifier:(int*)arg2 ;
-(void)doneSetup;
-(bool)equalID:(id)arg1 andID:(id)arg2 ;
-(id)normalizedFormOfID:(id)arg1 ;
-(long long)compareNames:(id)arg1 ;
-(id)serviceProperties;
-(void)setServiceProperties:(id)arg1 ;
-(id)_accountForUniqueID:(id)arg1 ;
-(id)subtypeInformationForAccount:(id)arg1 ;
-(id)serviceImageData;
-(long long)maxAttachmentSize;
-(bool)_supportsDatabaseStorage;
-(bool)_wantsInternationizedNumbers;
-(id)addressBookProperty;
-(long long)buddyNotesMaxByteLength;
-(id)accountIDs;
-(void)_addAddressBookCards:(id)arg1 toMap:(id)arg2 ;
-(void)_dumpCardMap;
-(id)_newIDToCardMap;
-(void)updateIDToCardMapWithNotification:(id)arg1 ;
-(id)cardMap;
-(id)imABPeopleWithScreenName:(id)arg1 ;
-(id)imABPeopleWithScreenName:(id)arg1 options:(unsigned long long)arg2 ;
-(id)_personToIDMap;
-(id)screenNamesForIMPerson:(id)arg1 ;
-(void)defaultsChanged:(id)arg1 ;
-(id)serviceDefaults;
-(void)setServiceDefaults:(id)arg1 ;
-(id)defaultAccountSettings;
-(void)setDefaultAccountSettings:(id)arg1 ;
-(bool)supportsAuthorization;
-(bool)handlesChatInvites;
-(bool)supportsRegistration;
-(bool)ignoresNetworkConnectivity;
-(bool)supportsOfflineTransfers;
-(bool)supportsPresence;
-(bool)supportsMutatingGroupMembers;
-(bool)supportsGroupAttachments;
-(bool)supportsAdding;
-(bool)isPlugInService;
-(bool)allowsMultipleConnections;
-(bool)shouldDisableDeactivation;
-(unsigned)IDSensitivity;
-(id)addressBookProperties;
-(id)emailDomains;
-(id)shortName;
-(Class)accountClass;
@end

