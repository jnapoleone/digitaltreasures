<?php ?>
<div ng-controller="dtLeads">
  <div id="messages" class="alert alert-success" ng-show="messages" ng-bind="messages"></div>
  <form novalidate class="dt-leads__webform" name="leadsForm" ng-submit="submitForm(leadsForm.$valid)" action="https://crm.zoho.com/crm/WebToLeadForm" name=WebToLeads178597000000048007 method="POST" onSubmit="javascript:document.charset=\"UTF-8\";" accept-charset="UTF-8">
<!--  <form novalidate class="dt-leads__webform" name="leadsForm" ng-submit="submitForm(leadsForm.$valid)">-->
    <input type="hidden" name="xnQsjsdp" value=EfEyMGDXLbk$/>
    <input type="hidden" name="xmIwtLD" value=*nl06dMnyEqOOxTacc5oZQw1vyXgS1pG/>
    <input type="hidden" name="actionType" value=TGVhZHM=/>
    <input type="hidden" name="returnURL" value="<?php print $base_url; ?>" />
    <input type='hidden' maxlength="20" name="Lead Source" value="<?php print $title; ?>"/>
    <div class="dt-leads__webform-element">
      <label class="dt-leads__webform-element--label" for="First Name" >First name:</label>
      <span class="dt-leads__webform-element--required" ng-show="leadsForm.firstName.$invalid && !leadsForm.firstName.$pristine">Required</span>
      <input class="dt-leads__webform-element--textfield" ng-model="firstName" type="text" name="First Name" placeholder="First Name (required)" required />
    </div>
    <div class="dt-leads__webform-element">
      <label class="dt-leads__webform-element--label" for="Last Name">Last name:</label>
      <span class="dt-leads__webform-element--required" ng-show="leadsForm.lastName.$invalid && !leadsForm.lastName.$pristine">Required</span>
      <input class="dt-leads__webform-element--textfield" ng-model="lastName" type="text" name="Last Name" placeholder="Last Name (required)" required />
    </div>
    <div class="dt-leads__webform-element">
      <span class="dt-leads__webform-element--required" ng-show="leadsForm.email.$invalid && !leadsForm.email.$pristine">Required</span>
      <label class="dt-leads__webform-element--label" for="Email">E-mail address:</label>
      <input class="dt-leads__webform-element--textfield" ng-model="email" type="email" name="Email" placeholder="E-mail address (required)" required />
    </div>
    <div class="dt-leads__webform-element">
      <label class="dt-leads__webform-element--label" for="Phone">Phone number:</label>
      <input class="dt-leads__webform-element--textfield" ng-model="phone" type="text" name="Phone" placeholder="Phone number" />
    </div>
    <div class="dt-leads__webform-element">
      <label class="dt-leads__webform-element--label" for="Description">Question:</label>
      <textarea class="dt-leads__webform-element--textarea" ng-model="description" name="Description" placeholder="Type your question here"></textarea>
    </div>
    <div>
      <input class="dt-leads__webform-element--submit" ng-disabled="leadsForm.$invalid" type="submit" title="Send" value="Send" />
    </div>
  </form>
</div>
