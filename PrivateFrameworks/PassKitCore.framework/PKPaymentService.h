/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentService : NSObject <PKPaymentServiceExportedInterface, PKXPCServiceDelegate> {
    <PKPaymentServiceDelegate> * _delegate;
    PKXPCService * _remoteService;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *defaultPaymentPassUniqueIdentifier;
@property (nonatomic) <PKPaymentServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned int outstandingExpressTransactionState;
@property (nonatomic, readonly) PKFieldProperties *paymentDeviceFieldProperties;
@property (nonatomic, retain) PKPaymentWebServiceContext *sharedPaymentWebServiceContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_defaultPaymentPassUniqueIdentifier:(id /* block */)arg1;
- (id)_existingRemoteObjectProxy;
- (void)_messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_paymentDeviceFieldPropertiesWithCompletion:(id /* block */)arg1;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (void)_sharedPaymentWebServiceContextWithCompletion:(id /* block */)arg1;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)_transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)archiveMessageWithIdentifier:(id)arg1;
- (void)consistencyCheck;
- (id)defaultExpressFelicaTransitPassIdentifier;
- (id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1;
- (id)defaultPaymentPassUniqueIdentifier;
- (id)delegate;
- (void)deleteAllTransactionsForPaymentPassWithUniqueIdentifier:(id)arg1;
- (void)deleteMessagesForPaymentPassWithUniqueIdentifier:(id)arg1;
- (void)deletePaymentTransactionWithIdentifier:(id)arg1 forPassWithUniqueIdentifier:(id)arg2;
- (void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1;
- (void)downloadAllPaymentPasses;
- (void)felicaStateWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)initializeSecureElementIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)insertOrUpdatePaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 completion:(id /* block */)arg4;
- (void)insertOrUpdateValueAddedServiceTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentTransaction:(id)arg3 completion:(id /* block */)arg4;
- (id)messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;
- (void)messagesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (unsigned int)outstandingExpressTransactionState;
- (void)passWithUniqueIdentifier:(id)arg1 didReceiveValueAddedServiceTransaction:(id)arg2;
- (void)passbookUIServiceDidLaunch;
- (void)paymentDeviceDidEnterFieldWithProperties:(id)arg1;
- (void)paymentDeviceDidExitField;
- (id)paymentDeviceFieldProperties;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithFelicaPassProperties:(id)arg2;
- (void)processFelicaTransitTransactionEventWithHistory:(id)arg1 transactionDate:(id)arg2 forPaymentApplication:(id)arg3 withPassUniqueIdentifier:(id)arg4;
- (void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;
- (void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
- (void)sanitizeDefaultExpressPasses;
- (void)scheduleAutomaticPresentationAvailableNotificationForPassWithUniqueIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)scheduleSetupReminders;
- (void)setDefaultExpressFelicaTransitPassIdentifier:(id)arg1 withCredential:(id)arg2 completion:(id /* block */)arg3;
- (void)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)setDefaultPaymentPassUniqueIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSharedPaymentWebServiceContext:(id)arg1;
- (id)sharedPaymentWebServiceContext;
- (void)simulateDefaultExpressTransitPassIdentifier:(id)arg1;
- (void)simulatePaymentPush;
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3;
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned int)arg2 withBackingData:(unsigned int)arg3 limit:(int)arg4 completion:(id /* block */)arg5;
- (void)valueAddedServiceTransactionsForPassWithUniqueIdentifier:(id)arg1 limit:(int)arg2 completion:(id /* block */)arg3;
- (void)valueAddedServiceTransactionsForPaymentTransaction:(id)arg1 limit:(int)arg2 completion:(id /* block */)arg3;

@end
