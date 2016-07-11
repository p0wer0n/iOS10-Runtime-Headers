/* Generated by RuntimeBrowser.
 */

@protocol SBFUserAuthenticationModel <NSObject>

@required

- (<SBFUserAuthenticationModelDelegate> *)delegate;
- (bool)isPermanentlyBlocked;
- (bool)isTemporarilyBlocked;
- (void)notePasscodeEntryBegan;
- (void)notePasscodeEntryCancelled;
- (void)notePasscodeUnlockFailedWithError:(NSError *)arg1;
- (void)notePasscodeUnlockSucceeded;
- (void)performPasswordTest:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool*, void*
- (void)setDelegate:(id <SBFUserAuthenticationModelDelegate>)arg1;
- (void)synchronize;
- (double)timeUntilUnblockedSinceReferenceDate;

@optional

- (void)clearBlockedState;
- (void)noteNewMkbDeviceLockState:(SBFMobileKeyBagState *)arg1;
- (void)refreshBlockedState;

@end