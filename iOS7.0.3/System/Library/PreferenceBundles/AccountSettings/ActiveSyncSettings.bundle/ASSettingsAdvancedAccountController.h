/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/ActiveSyncSettings.bundle/ActiveSyncSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ActiveSyncSettings/ActiveSyncSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <AccountsUI/ACUIIdentityPickerViewControllerDelegate.h>

@class ASSettingsAccountsUIController, ASAccount;

@interface ASSettingsAdvancedAccountController : PSListController <ACUIIdentityPickerViewControllerDelegate> {

	ASSettingsAccountsUIController* _accountController;
	ASAccount* _account;

}

@property (nonatomic,retain) ASAccount * account;                            //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) BOOL accountArchivesMailByDefault; 
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)_accountIsManaged;
-(id)lastGroupSpecifierInSpecifiers:(id)arg1 ;
-(BOOL)accountArchivesMailByDefault;
-(BOOL)_smimeEnabled;
-(id)_smimeSigningSpecifier;
-(id)_smimeEncryptSpecifier;
-(void)setAccountBooleanProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountBooleanPropertyWithSpecifier:(id)arg1 ;
-(void)_insertAdditionalSMIMESpecifiersAnimated:(BOOL)arg1 ;
-(void)setAccountArchivesMailByDefault:(BOOL)arg1 ;
-(void)_setNeedsSaveAndValidation:(BOOL)arg1 ;
-(void)_removeAdditionalSMIMESpecifiersAnimated:(BOOL)arg1 ;
-(void)_handleTrustFromIdentity:(SecIdentityRef)arg1 handler:(/*^block*/ id)arg2 ;
-(id)_persistentRefForIdentity:(SecIdentityRef)arg1 ;
-(BOOL)isPropertyEnabledForIdentityPickerController:(id)arg1 ;
-(SecIdentityRef)selectedIdentityForIdentityPickerController:(id)arg1 ;
-(void)identityPickerController:(id)arg1 setPropertyEnabled:(BOOL)arg2 withIdentity:(SecIdentityRef)arg3 ;
-(id)localizedSwitchNameForIdentityPickerController:(id)arg1 ;
-(id)copyIdentitiesForIdentityPickerController:(id)arg1 ;
-(SecTrustRef)copyTrustForIdentityPickerController:(id)arg1 identity:(SecIdentityRef)arg2 ;
-(id)emailAddressesForIdentityPickerController:(id)arg1 ;
-(BOOL)allowEditingForIdentityPickerController:(id)arg1 ;
-(void)_accountsChanged:(id)arg1 ;
-(id)account;
-(void)setAccount:(id)arg1 ;
-(id)specifiers;
@end

